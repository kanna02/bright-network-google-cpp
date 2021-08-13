#pragma once

#include <string>
#include <unordered_map>
#include <vector>

#include "video.h"
#include "videoplaylist.h"

/**
 * A class used to represent a Video Library.
 */
class VideoLibrary {
 private:
  std::unordered_map<std::string, Video> mVideos;
  mutable std::unordered_map<std::string, VideoPlaylist> mVideoPlaylists;



 public:
  VideoLibrary();

  // This class is not copyable to avoid expensive copies.
  VideoLibrary(const VideoLibrary&) = delete;
  VideoLibrary& operator=(const VideoLibrary&) = delete;

  // This class is movable.
  VideoLibrary(VideoLibrary&&) = default;
  VideoLibrary& operator=(VideoLibrary&&) = default;

  // Video
  std::vector<Video> getVideos() const;
  const Video *getVideo(const std::string& videoId) const;

  // Video Playlist
  std::vector<VideoPlaylist> getPlaylists() const;

  const VideoPlaylist* getPlaylist(const std::string& VideoPlaylistName) const;


  // add playlist to videolibrary
  void add_playlist(const std::string& playlist_name) const;




};


