/*
 * copyright (c) 2020 Gofran Chang
 * 
 * FileName: AVConfig.cpp
 * 
 * Author  : Gofran Chang
 * E-mail  : zhanggaofan0827@gmail.com
 * 
 * Date    : 2020-07-16
 *
 * This file is part of Edision.
 */

#include "AVConfig.h"

namespace edision {

std::map<AVPixelFormat, std::string>  VideoConfig::_mFmtUpon = VideoConfig::createFmtUpon();

VideoConfig::VideoConfig() {
  
}

std::map<AVPixelFormat, std::string> VideoConfig::createFmtUpon() {
  std::map<AVPixelFormat, std::string> res;
//  res[VIDEO_YUV444] = "yuv444";
//  res[VIDEO_YUV422] = "yuv422";
//  res[VIDEO_UYVY422] = "uyuv422";
  res[AV_PIX_FMT_NV12] = "nv12";
  res[AV_PIX_FMT_NV21] = "nv21";
  res[AV_PIX_FMT_YUV420P] = "yuv420p";

  return res;
}

} //namespace edision
