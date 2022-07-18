
#pragma once

#include "VTFLib.h"

#include <vector>
#include <string>

/**
 * Convert an image format enum to string
 * Returns a textual representation of the enum
 * default case is trapped
 */
const char* ImageFormatToString(VTFImageFormat format);

/**
 * Convert to image format enum from string
 * Returns IMAGE_FORMAT_NONE if arg could not be converted
 * comparisons are not case sensitive. ie rgba8888 matches with RGBA8888 
 */
VTFImageFormat ImageFormatFromString(const char* arg);

/**
 * Convert VTF flags to a user friendly list of strings
 */
std::vector<std::string> TextureFlagsToStringVector(std::uint32_t flags);

/**
 * Get a human readable name for the resource
 */
const char* GetResourceName(vlUInt resource);
