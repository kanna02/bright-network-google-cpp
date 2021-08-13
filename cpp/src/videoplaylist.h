#pragma once

#include "video.h"
#include <string>
#include <vector>

/** A class used to represent a Playlist */

class VideoPlaylist {

    private:

    std::string mPlayListName;
    mutable std::vector<std::string> mVideoIds;


    public:
    VideoPlaylist(std::string&& playlistName, std::vector<std::string>&& videoIds);

    // Returns the name of the playlist.
    const std::string& getName() const;

    // Returns the videos of the playlist.
    const std::vector<std::string>& getVideoIds() const;

    // method to add video to videos vector
    void add_video (const std::string& videoID) const;

    // checks if playlist already has a video
    bool video_exists (const std::string& videoID) const;
    



};

// sorts video playlist titles alphabetically
bool compare_names_playlist(const VideoPlaylist &x, const VideoPlaylist &y);

