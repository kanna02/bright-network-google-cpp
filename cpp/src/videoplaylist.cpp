#include "videoplaylist.h"
#include "video.h"
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

// VideoPlayList object
VideoPlaylist::VideoPlaylist(std::string&& playlistName, 
             std::vector<string>&& videoIds) :
  mPlayListName(std::move(playlistName)),
  mVideoIds(std::move(videoIds)) {
}

// Returns the name of the playlist.
const std::string& VideoPlaylist::getName() const { return mPlayListName; }

// Returns the videos of the playlist.
const std::vector<string>& VideoPlaylist::getVideoIds() const { return mVideoIds; }

// method to add video to videos vector
void VideoPlaylist::add_video (const string& videoID) const{
  mVideoIds.push_back(videoID);
}

// checks if playlist already has a video
bool VideoPlaylist::video_exists (const std::string& videoID) const{
    
    // search if id already exists
    auto search = find(mVideoIds.begin(),mVideoIds.end(),videoID);
    
    // case: video added
    if (search != mVideoIds.end())
      return true;
    // case: video not added
    else 
      return false;

}

// sorts video playlist titles alphabetically
bool compare_names_playlist(const VideoPlaylist &x, const VideoPlaylist &y) { 
  return x.getName() < y.getName();
}
