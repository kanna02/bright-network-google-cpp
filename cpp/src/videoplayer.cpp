#include "videoplayer.h"

#include "video.h"
#include "helper.h"
#include "videoplaylist.h"

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


string video_state = "stop"; //intially there is no video playing
string old_video_title; // current playing video title


void VideoPlayer::numberOfVideos() {
  std::cout << mVideoLibrary.getVideos().size() << " videos in the library" << std::endl;
}

//done
void VideoPlayer::showAllVideos() {

  cout << "Here's a list of all available videos: " << endl;
  vector<Video> videos = mVideoLibrary.getVideos(); //vector of all videos

  // print videos
  for (const auto &video : videos){
    cout << "  " << video.getTitle() << " (" << video.getVideoId() << ") " ; // print title and id
    write_tags(cout,video.getTags());   // print tags
    cout << '\n';
  }
}

//done
void VideoPlayer::playVideo(const std::string& videoId) {

  // get all video ids
  vector<string> ids;
  for (const auto &video : mVideoLibrary.getVideos()){
    ids.push_back(video.getVideoId());
  }

  if ( find(ids.begin(),ids.end(), videoId) != ids.end() ) { // search if user input videoID exists
  
  // case: no video playing
    if (video_state == "stop"){
      video_state = "playing"; 
      string title = mVideoLibrary.getVideo(videoId)->getTitle(); // get title of selected video
      old_video_title = title; //save current video title
      cout << playing_message(video_state,title) << endl;
    }

    // case: video already playing -> stop, play new video
    else if (video_state == "playing"){

      // stop old video //
      video_state = "stop";
      cout << playing_message(video_state,old_video_title) << endl;

      // play new video //
      video_state = "playing"; 
      string title = mVideoLibrary.getVideo(videoId)->getTitle(); // get title of selected video
      old_video_title = title; //save current video title
      cout << playing_message(video_state,title) << endl;
    }
    // case: video is paused
      else if (video_state == "paused"){

      // stop old video //
      video_state = "stop";
      cout << playing_message(video_state,old_video_title) << endl;

      // play new video //
      video_state = "playing"; 
      string title = mVideoLibrary.getVideo(videoId)->getTitle(); // get title of selected video
      old_video_title = title; //save current video title
      cout << playing_message(video_state,title) << endl;
    }

    else {}
      
  }
  // case: video not found
  else {
    if (video_state == "playing") {
      cout << "Cannot play video: Video does not exist" << endl;
      video_state = "playing";
    }
    else if (video_state == "stop"){
      cout << "Cannot play video: Video does not exist" << endl;
      video_state = "stop";
    }
    else {}
  }

  
}

//done
void VideoPlayer::stopVideo() {
  // case: video is playing or paused
  if (video_state == "playing" || video_state == "paused"){
    video_state = "stop";
    cout << playing_message(video_state,old_video_title) << endl;
  }
  else
    cout << "Cannot stop video: No video is currently playing" << endl;

}

//done
void VideoPlayer::playRandomVideo() {

  vector<Video> videos = mVideoLibrary.getVideos(); //vector of all videos

  // case: no video playing
  if (video_state == "stop"){

    video_state = "playing";

    // get random video title
    srand (time(NULL));  /* initialize random seed: */
    int x = rand() % videos.size();
    string title = videos[x].getTitle();
    old_video_title = title; // save current video title

    cout << playing_message(video_state,title) << endl;
  }
 // case: video playing
 else if (video_state == "playing"){
    // stop old video //
    video_state = "stop";
    cout << playing_message(video_state,old_video_title) << endl;

   // play random video //
    video_state = "playing";

    // get random video title
    srand (time(NULL));  /* initialize random seed: */
    int x = rand() % videos.size();
    string title = videos[x].getTitle();
    old_video_title = title; // save current video title

    cout << playing_message(video_state,title) << endl;
 }
 // case: no videos available
 else if (videos.size() == 0)
   cout << "No videos available" << endl;
  
  else {}
}

//done
void VideoPlayer::pauseVideo() {
  
  // case: video playing
  if (video_state == "playing"){
    video_state = "paused";
    cout << playing_message(video_state,old_video_title) << endl;
  }
  
  // case: video paused
  else if (video_state == "paused"){
    video_state = "paused";
    cout << "Video already paused: " << old_video_title << endl;
  }

  // case: no video playing
  else if (video_state == "stop") {
    cout << "Cannot pause video: No video is currently playing" << endl;
    video_state = "stop";

  }
}

//done
void VideoPlayer::continueVideo() {
  
  // case: paused
  if (video_state == "paused"){
    video_state = "continue"; // to show the continue message
    cout << playing_message(video_state, old_video_title) << endl; 
    video_state = "playing"; // video keeps playing
  }
  
  // case: playing
  else if (video_state == "playing" ){
    video_state = "playing";
    cout << "Cannot continue video: Video is not paused" << endl;
  }

  // case: continue
  else if ( video_state == "continue" ){
    video_state = "continue";
    cout << "Cannot continue video: Video is not paused" << endl;
  }

  // case: stop
  else if (video_state == "stop")
    cout << "Cannot continue video: No video is currently playing" << endl;

  else {}

}

//done
void VideoPlayer::showPlaying() {

  // video playing
  if (video_state == "playing"){

    vector<Video> videos = mVideoLibrary.getVideos(); //vector of all videos
    string id; // video id

    // find video id
    for (const auto &video : videos){ 
      if ( video.getTitle() == old_video_title ) 
        id = video.getVideoId();
    }

    // print whole video
    cout << "Currently playing: " <<old_video_title << " (" << id << ") " ;
    write_tags(cout,mVideoLibrary.getVideo(id)->getTags());   // print tags
    cout << "\n";
  }

  // video paused
  else if (video_state == "paused"){
    vector<Video> videos = mVideoLibrary.getVideos(); //vector of all videos
    string id; // video id

    // find video id
    for (const auto &video : videos){ 
      if ( video.getTitle() == old_video_title ) 
        id = video.getVideoId();
    }

    // print whole video
    cout << "Currently playing: " <<old_video_title << " (" << id << ") " ;
    write_tags(cout,mVideoLibrary.getVideo(id)->getTags());   // print tags
    cout << " - PAUSED" << endl;
  }

  else 
    cout << "No video is currently playing" << endl;

}


//TODO: playlist names are not case sensitive
void VideoPlayer::createPlaylist(const string& playlistName)  {
  mVideoLibrary.add_playlist(playlistName);   
}

// done
void VideoPlayer::addVideoToPlaylist(const std::string& playlistName, const std::string& videoId) {

  // playlist doesnt exist
  if (mVideoLibrary.getPlaylist(playlistName) == nullptr)
    cout << "Cannot add video to " << playlistName << ": Playlist does not exist" <<  endl;

  // video doesn't exist
  else if (mVideoLibrary.getVideo(videoId) == nullptr)
    cout <<"Cannot add video to " << playlistName << ": Video does not exist" << endl;

  // video already added
  else if (mVideoLibrary.getPlaylist(playlistName)->video_exists(videoId) == true)
    cout << "Cannot add video to " << playlistName << ": Video already added" << endl;
  
  // add video
  else {
    mVideoLibrary.getPlaylist(playlistName)->add_video(videoId);
    cout << "Added video to " <<  playlistName << ": " << mVideoLibrary.getVideo(videoId)->getTitle()  << endl;
  }
}

// done
void VideoPlayer::showAllPlaylists() {

  if (mVideoLibrary.getPlaylists().size() < 1){
    cout << "No playlists exist yet" << endl;
  }

  for (auto playList : mVideoLibrary.getPlaylists()){
    cout << "  " << playList.getName() << endl;
  }
}

//TODO not finished
void VideoPlayer::showPlaylist(const std::string& playlistName) {

  // no videos yet
  if (mVideoLibrary.getPlaylist(playlistName)->getVideoIds().size() < 1){
    cout << "Showing playlist:" <<  playlistName << endl;
    cout << "  No videos here yet" << endl;
  }
  // playlist does not exist
  else if (mVideoLibrary.getPlaylist(playlistName) == nullptr)
    cout << "Cannot show playlist " << playlistName << ": Playlist does not exist" << endl;
  // show playlist
  else{
    cout << "Showing playlist:" <<  playlistName << endl;
    //TODO: show videos here
  }
}

void VideoPlayer::removeFromPlaylist(const std::string& playlistName,
                                     const std::string& videoId) {
  std::cout << "removeFromPlaylist needs implementation" << std::endl;
}

void VideoPlayer::clearPlaylist(const std::string& playlistName) {
  std::cout << "clearPlaylist needs implementation" << std::endl;
}

void VideoPlayer::deletePlaylist(const std::string& playlistName) {
  std::cout << "deletePlaylist needs implementation" << std::endl;
}

void VideoPlayer::searchVideos(const std::string& searchTerm) {
  std::cout << "searchVideos needs implementation" << std::endl;
}

void VideoPlayer::searchVideosWithTag(const std::string& videoTag) {
  std::cout << "searchVideosWithTag needs implementation" << std::endl;
}

void VideoPlayer::flagVideo(const std::string& videoId) {
  std::cout << "flagVideo needs implementation" << std::endl;
}

void VideoPlayer::flagVideo(const std::string& videoId, const std::string& reason) {
  std::cout << "flagVideo needs implementation" << std::endl;
}

void VideoPlayer::allowVideo(const std::string& videoId) {
  std::cout << "allowVideo needs implementation" << std::endl;
}
