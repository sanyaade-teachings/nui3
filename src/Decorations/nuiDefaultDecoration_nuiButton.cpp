/*
  NUI3 - C++ cross-platform GUI framework for OpenGL based applications
  Copyright (C) 2002-2003 Sebastien Metrot & Vincent Caron

  licence: see nui3/LICENCE.TXT
*/

#include "nui.h"

NGL_API const char* gpDefaultDecorationButtonUp = "\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52"
"\x00\x00\x00\x12\x00\x00\x00\x21\x08\x02\x00\x00\x00\x5b\x42\x6c"
"\x03\x00\x00\x00\x19\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72"
"\x65\x00\x41\x64\x6f\x62\x65\x20\x49\x6d\x61\x67\x65\x52\x65\x61"
"\x64\x79\x71\xc9\x65\x3c\x00\x00\x01\xa7\x49\x44\x41\x54\x78\xda"
"\x9c\x55\x4b\xb2\x02\x31\x08\x04\x3f\x0b\x6f\x32\xf7\xf0\xfe\x7b"
"\xaf\xe1\xca\x2a\x35\xf4\x23\x40\x42\x12\x7d\x55\xaa\x55\xce\xe4"
"\xd7\x34\xd0\x90\x61\x00\xf4\xfd\x8f\xef\xf7\xfb\xed\x76\x7b\x3c"
"\x1e\x1f\x02\x8e\xc7\xe3\xe9\x74\xe2\xeb\xf5\x7a\xb9\x5c\xbe\xa2"
"\xda\xb6\xed\xe0\x3c\x80\x80\x98\xeb\x48\x3d\xd0\xa9\x4e\x60\xeb"
"\x5c\x57\x7d\xd1\x1e\xcc\x3b\x85\x1c\xdc\x80\xe8\x41\x0b\x12\x1d"
"\x29\x1e\x04\x7c\xa0\x46\x74\x19\x4c\xfb\x6a\x9b\x1a\xac\xc0\x38"
"\xea\x06\x39\x2f\xea\x98\xdd\x9a\x0d\xcc\x20\xef\x77\x03\x0c\x28"
"\x46\xc6\xe8\xfb\xe6\x96\x50\x9b\x86\xbd\x80\x04\xac\x88\xba\xa2"
"\xe1\x88\x9f\x37\x3f\x25\x6c\xc4\x79\xd1\xb0\xa8\xa9\xd5\x9c\x0c"
"\x98\x53\x5a\x6e\xa4\x52\xc5\x49\x18\x57\x24\x67\x8a\x4d\xbe\xd2"
"\x60\x84\xb9\xeb\x61\x11\x1c\x09\x24\xf7\x33\xd6\x79\x82\x3d\xa5"
"\xf0\x6a\x11\xa1\xe4\xb8\xf4\xc2\x56\x46\x9b\xd4\x38\x06\xd7\xa7"
"\xdd\x74\xd2\xa2\xee\xb2\xa1\x3b\x19\x53\x4f\x15\x66\xb6\x22\x4f"
"\x8d\x06\x3c\xaa\x5d\x2b\xc4\x6b\xcc\x61\x8c\xa6\x7a\xc2\x8a\x78"
"\x4d\x0d\x71\x51\xaf\xce\x8c\x8c\x17\xb6\x67\x49\xcc\x64\x60\x9e"
"\xbe\x38\x59\x7e\xd1\xad\xd4\x4c\x12\x8f\x79\x9c\xa7\xcb\xd6\x04"
"\x1b\x0f\x70\xeb\x86\x77\xa8\x09\x36\xec\xf5\x21\x2f\x42\xe2\x45"
"\xee\x4c\x1b\x63\x60\xf2\x8e\x40\x97\x65\x2e\x2e\xf1\xae\x8f\xac"
"\xf5\x61\x3e\x52\x96\xa5\xb8\xfe\x09\x7f\x8d\x6b\x86\x0d\x0e\x36"
"\xf7\x38\x65\x27\x74\x76\x5a\xba\xfb\x87\x7e\x13\xf1\x02\xf4\x1b"
"\x2e\x0c\x5b\x8d\x72\xb4\x50\x6c\xad\x35\x69\x6d\x82\x70\x88\xed"
"\xd6\x21\xa9\xff\x54\x91\x65\x65\x43\xc9\x80\x6c\x9e\x0d\x16\xb7"
"\x1f\xb2\xe9\xf2\xc2\x13\x41\x6f\xfb\xa6\x94\x51\xda\xb5\x84\x76"
"\x07\x62\x8d\xad\xa7\x0f\x9e\xbd\x96\x43\xa4\x92\xed\x82\xa9\x30"
"\xfd\x82\xe8\xeb\x7c\x3e\x7f\x9e\x46\x85\xfc\xf8\xa1\xfa\x13\x60"
"\x00\xf7\x92\x41\x1b\x13\x48\xa3\x96\x00\x00\x00\x00\x49\x45\x4e"
"\x44\xae\x42\x60\x82";


NGL_API const char* gpDefaultDecorationButtonHover = "\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52"
"\x00\x00\x00\x12\x00\x00\x00\x21\x08\x06\x00\x00\x00\xd4\x20\xfb"
"\x54\x00\x00\x00\x19\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72"
"\x65\x00\x41\x64\x6f\x62\x65\x20\x49\x6d\x61\x67\x65\x52\x65\x61"
"\x64\x79\x71\xc9\x65\x3c\x00\x00\x01\xe4\x49\x44\x41\x54\x78\xda"
"\xac\x56\x4b\x76\xc3\x20\x0c\x94\x12\x67\xd1\x4d\x7b\x9c\x5c\x2c"
"\xc7\xc8\x65\xbb\xea\x22\x85\x29\x1f\x49\x08\x0c\xcf\x6d\x13\x5e"
"\x1c\x6c\x63\xe4\x91\x66\x18\xcc\x00\xe8\x15\x8d\xd3\x71\x49\xc7"
"\x9b\xf4\xff\x69\x8f\x74\x7c\xe5\x40\xef\xf7\xfb\xfd\xf3\x19\x34"
"\xb7\xdb\xed\x63\x53\x24\xdb\x76\x26\x24\x80\xec\x9f\x40\xf9\x11"
"\xb3\xf4\x72\x13\xe0\x72\xc1\xa9\x2c\xdf\x21\xe4\x9b\x97\x4d\xe7"
"\xc4\x88\x3c\x52\x67\x94\x29\x90\x53\x26\x94\xb1\x1c\x0d\x1a\x2a"
"\xfd\x71\xfe\x59\xb3\x40\x40\xac\x83\x0a\xa5\x0d\x58\x8f\x06\x94"
"\x58\xe1\x8e\x81\x0a\xa2\x3c\xc2\x0e\x98\xf0\xc1\x05\xc3\xd8\x6b"
"\xda\x3c\x06\x8a\x52\x21\x50\x94\xde\x73\x9b\x83\x47\x0b\x4c\x16"
"\x92\xcf\x93\x40\x56\x1d\x96\xb7\x42\x23\x48\x31\xd2\x79\x0b\x58"
"\x9f\x3d\x9d\x4f\x33\x44\x64\x90\xed\xc9\x38\x39\xa7\x7d\x6d\x76"
"\x88\x7e\xdf\x9a\x20\xba\x40\x21\x23\x82\x63\x84\x2a\xbd\xec\x59"
"\x2a\xf3\xa5\x42\x39\x7d\xc4\x09\x6b\x49\x58\x1a\x3f\x76\x2b\x48"
"\x02\x38\x1d\x8d\x43\x43\x6a\xa1\x8e\xea\xa0\xc0\x83\xd1\xd6\x52"
"\x62\x45\x36\x13\x64\x08\xf1\x70\x75\x63\xb8\x60\x9a\x06\x0a\xad"
"\x78\x42\x33\x5c\x80\x9a\x19\xbb\x6b\x4c\xd9\xab\xac\xf5\x44\x38"
"\x7e\xdc\x72\xb6\x67\xa0\x49\x4e\x10\x89\x56\xb2\xec\x47\xc3\x2b"
"\x12\x55\x14\x5e\x5b\xb3\x62\x43\x81\x0b\xc5\x5c\x65\x4e\x2a\x70"
"\xab\x31\xb0\x66\x6d\x59\xec\x45\xba\x2b\x85\x27\x41\x86\x56\x60"
"\x66\xf3\x1c\xd2\xf5\x2e\x04\x68\x4e\x58\x16\x3b\xec\x8b\xbd\x06"
"\xb3\x1f\xe9\x10\x65\x04\x99\x56\xa0\xd1\xad\x88\xc8\xee\x8b\xc2"
"\x07\x42\x7a\x44\xcd\x47\xdc\xd2\x18\x8d\xee\xa0\x46\x79\xad\x55"
"\x1f\x3a\xc8\xc2\xe0\x2e\xe9\xaf\xe6\xdf\x7b\xb6\xf8\x80\xf3\xeb"
"\xf2\xaa\x08\x29\xfe\x4c\x90\x88\x4d\x2b\x26\x5e\x99\x60\x8b\x39"
"\xd9\x70\xb1\x0f\x79\x39\x2f\x6a\xd4\xf6\x10\x26\x66\xbf\xb7\xf5"
"\xbb\x8a\xb9\xe8\x4c\x90\x69\xf3\x6a\x3e\x94\x53\xfc\xa3\x61\xf6"
"\x0e\xd9\xec\xb0\xf9\x10\x7c\x55\xd5\x3b\xd8\x2c\x6b\xb2\x41\xa2"
"\xc1\x85\xf7\x1c\x88\xb5\x8a\x2c\x00\x33\x37\x0c\x88\xf2\xd7\x04"
"\x5d\xaf\xd7\x67\xbe\x23\x1e\x2f\xfb\xac\xf9\x11\x60\x00\x48\xb5"
"\x37\x75\xb3\x51\xf5\x16\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42"
"\x60\x82";


NGL_API const char* gpDefaultDecorationButtonDown = "\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52"
"\x00\x00\x00\x12\x00\x00\x00\x21\x08\x06\x00\x00\x00\xd4\x20\xfb"
"\x54\x00\x00\x00\x19\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72"
"\x65\x00\x41\x64\x6f\x62\x65\x20\x49\x6d\x61\x67\x65\x52\x65\x61"
"\x64\x79\x71\xc9\x65\x3c\x00\x00\x01\xdf\x49\x44\x41\x54\x78\xda"
"\xac\x56\x39\x8e\xc3\x30\x0c\xd4\x50\x4e\xb1\xd5\xfe\x25\xcf\xca"
"\x1b\x52\xe6\x0d\xf9\xe7\x56\x5b\xa4\xe0\x4a\x3c\x74\x58\x74\x16"
"\x48\x22\xc0\x10\xac\x83\x1c\x0e\xc9\xb1\xc1\xcc\xe9\x13\x03\xe5"
"\x39\x95\xe7\xcb\xe6\x57\xc6\xa3\x3c\xbf\x5b\x35\x72\xbb\xdd\x7e"
"\xde\x41\x73\xbd\x5e\xbf\x37\x47\x72\xbf\xdf\x5f\x32\x72\xb9\x5c"
"\xea\x74\xda\x5a\x8c\x40\x0f\x76\xa0\xad\x2e\x0b\x8d\xbb\xf5\xfd"
"\xe8\x86\x88\x74\x2e\xb7\x98\xd4\xa2\xdc\x2d\xef\xa0\xd5\x0e\x0e"
"\x0d\xc1\xae\x02\xd3\xa1\x86\xd4\xd1\x89\xb3\xd5\x52\x33\x94\x29"
"\x9b\x4f\x3d\xcd\xe5\x34\x18\x76\xa1\x63\xe1\xb2\x06\xf2\x97\xc0"
"\x10\x95\xd0\x2a\x17\xca\x49\x31\x92\x34\x1e\xc8\x69\x32\xfb\xac"
"\x68\x04\x3b\x4f\xa8\x26\xb2\x2b\x4d\xea\x91\xf5\xa8\x18\x16\x78"
"\x8a\xd5\xd1\xb1\x32\x36\x92\x30\x84\x46\xb2\x45\x64\x17\x8d\x2b"
"\x21\x1f\xea\x08\x6c\xe8\xa8\x91\x10\x85\x96\x7b\x6a\x28\x4a\xb0"
"\x6e\xcc\x64\x73\x60\x68\xa3\x25\xbf\x12\x55\xd8\x55\x6b\xda\xba"
"\x21\x64\xe1\x86\xcd\x91\x96\x82\x25\xb1\x2d\x62\x98\x2c\xab\x8b"
"\xa1\x4c\x4b\x91\x2d\x91\x61\x9e\x99\x82\xd0\x72\xf6\xd0\xd0\x0a"
"\x6f\xf2\x9e\x1c\x99\xc6\xac\x61\xe3\xa8\x20\x5f\x1f\x53\xd6\x6a"
"\xcd\x68\xed\xa0\xa3\x70\x92\x60\x45\x98\x7c\x0f\x71\x65\x4b\x68"
"\xff\xb5\x78\x90\xbb\x18\x51\x52\x3e\x52\xab\x62\x23\xd5\x33\x38"
"\x30\x8f\x9d\xa9\x1d\xa2\xc1\x57\x08\xee\x18\xf1\xd4\xb4\xee\x85"
"\x61\xa5\x60\xed\xd1\xe1\x78\x0f\xae\x06\x07\x44\x79\xe8\x8f\x5d"
"\xe5\xf2\xaa\x66\x4e\xfb\x41\xd3\x1e\x47\x21\xaf\x4f\x72\x31\x49"
"\x2d\xa4\x18\xbd\xfb\x2d\x8c\xd4\x8b\xaf\x69\x90\x29\x41\x9c\xb5"
"\xec\x9a\x4d\xa2\xd9\x24\xfc\xe8\x05\x18\x4f\x6c\x6d\x6f\xbe\x4a"
"\x7f\x86\x4d\x4b\x56\x88\xa6\x22\xf6\x05\x66\x22\xaf\x01\x39\xe3"
"\x1f\x03\x57\xd3\x90\x23\x67\x83\x07\xa1\x27\x78\x8d\x9b\xb0\x11"
"\x9a\x26\x85\x0a\x09\xea\x6a\x36\xe7\x6d\x38\x0e\x84\x7a\xbd\x68"
"\x76\x57\x09\xb4\xd6\x77\x3e\x46\x55\xe4\xe6\xea\xe8\x2b\x32\xa8"
"\xec\x08\x7b\xcc\x56\xdf\x59\x9b\xb6\xfe\x4d\xa4\xf3\xf9\xfc\x8e"
"\x8a\x3c\x3e\xf6\x5b\xf3\x27\xc0\x00\x09\x59\xc9\x22\xba\x0e\x76"
"\x0f\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82";