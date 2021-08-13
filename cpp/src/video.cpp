#include "video.h"

#include <iostream>
#include <utility>
#include <vector>

using namespace std;

Video::Video(std::string&& title, std::string&& videoId,
             std::vector<std::string>&& tags) :
  mTitle(std::move(title)),
  mVideoId(std::move(videoId)),
  mTags(std::move(tags)) {
}

const std::string& Video::getTitle() const { return mTitle; }

const std::string& Video::getVideoId() const { return mVideoId; }

const std::vector<std::string>& Video::getTags() const { return mTags; }

// sorts video titles alphabetically
bool compare_names_video(const Video &x, const Video &y) { 
  return x.getTitle() < y.getTitle();
}


