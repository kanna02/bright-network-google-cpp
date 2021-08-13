#include "videolibrary.h"

#include <fstream>
#include <iostream>
#include <sstream>
#include <unordered_map>
#include <utility>
#include <vector>
#include <functional>
#include <string>

#include "helper.h"
#include "video.h"
#include "videolibrary.h"

using namespace std;

VideoLibrary::VideoLibrary() {
  std::ifstream file("./src/videos.txt");
  if (file.is_open()) {
    std::string line;
    while (std::getline(file, line)) {
      std::stringstream linestream(line);
      std::string title;
      std::string id;
      std::string tag;
      std::vector<std::string> tags;
      std::getline(linestream, title, '|');
      std::getline(linestream, id, '|');
      while (std::getline(linestream, tag, ',')) {
        tags.emplace_back(trim(std::move(tag)));
      }
      Video video = Video(trim(std::move(title)), trim(id), std::move(tags));
      mVideos.emplace(trim(std::move(id)), std::move(video));
    }
  } else {
    std::cout << "Couldn't find videos.txt" << std::endl;
  }
}

// Video //
std::vector<Video> VideoLibrary::getVideos() const {
  std::vector<Video> result;
  for (const auto& video : mVideos) {
    result.emplace_back(video.second);
  }
  sort(result.begin(), result.end(),compare_names_video); // sort videos alphabetically
  return result;
}

const Video* VideoLibrary::getVideo(const std::string& videoId) const {
  const auto found = mVideos.find(videoId);
  if (found == mVideos.end()) {
    // std::cout << "Video not found in video library" << std::endl;
    return nullptr;
  } else {
    return &(found->second);
  }
}


// Playlist //
std::vector<VideoPlaylist> VideoLibrary::getPlaylists() const {
  std::vector<VideoPlaylist> result;
  for (const auto& VideoPlaylist : mVideoPlaylists) {
    result.emplace_back(VideoPlaylist.second);
  }
  sort(result.begin(), result.end(),compare_names_playlist); // sort videoPlaylists alphabetically
  return result;
}


const VideoPlaylist* VideoLibrary::getPlaylist(const std::string& VideoPlaylistName) const {
  const auto found = mVideoPlaylists.find(VideoPlaylistName); // find name in all playlists
  if (found == mVideoPlaylists.end()) {
    // std::cout << "Video playlist not found in video library" << std::endl;
    return nullptr;
  } else {
    return &(found->second);
  }
}

 // add playlist to videolibrary
 //TODO: playlist names are not case sensitive
  void VideoLibrary::add_playlist(const string& playlist_name) const {

    string title = playlist_name;

    // search if playlist already exists
    auto search = mVideoPlaylists.find(title);
    
    // case: playlist with that name already exists
    if (search != mVideoPlaylists.end())
      cout << "Cannot create playlist: A playlist with the same name already exists" << endl;
    
    // case: playlist with that name doesn't exists
    else {
      
      // create a playlist 
      vector<string> video_ids;
      string id = title;
      VideoPlaylist playList = VideoPlaylist(move(id), move(video_ids));
      
      // add playlist to map of playlists 
      mVideoPlaylists.emplace(move(title), move(playList));

      // creation message
      cout << "Successfully created new playlist: " << playlist_name << endl;

    }
  }




