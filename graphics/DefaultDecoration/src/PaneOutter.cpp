/*
  NUI3 - C++ cross-platform GUI framework for OpenGL based applications
  Copyright (C) 2002-2003 Sebastien Metrot & Vincent Caron

  licence: see nui3/LICENCE.TXT
*/

#include "nui.h"

NGL_API const char* gpPaneOutter = "\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52"
"\x00\x00\x00\x18\x00\x00\x00\x19\x08\x06\x00\x00\x00\x2b\x2b\xee"
"\x5d\x00\x00\x00\x19\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72"
"\x65\x00\x41\x64\x6f\x62\x65\x20\x49\x6d\x61\x67\x65\x52\x65\x61"
"\x64\x79\x71\xc9\x65\x3c\x00\x00\x02\x80\x49\x44\x41\x54\x78\xda"
"\xb4\x56\xbf\x8f\x12\x41\x14\xde\x19\x56\x0c\xd0\x1a\x0a\x3d\xb7"
"\xc1\x44\x2a\x44\x49\x6c\x08\x09\x44\x42\xe8\x2c\x6c\xb0\xe2\x0f"
"\xb0\xa0\xb0\x51\x29\xae\xd3\xc6\x04\x0a\x1a\x1b\x4c\xbc\x58\xdf"
"\x59\xd9\x99\xd0\x41\x63\x2c\x30\xb1\xb3\x30\x31\x14\x56\x90\x20"
"\xb2\xbb\x33\xbe\x5d\x66\xf6\xde\xce\xbd\xbd\x3b\x4c\xdc\xf0\x98"
"\xb7\xc3\xf0\x7d\x33\xef\xe7\x30\x29\xa5\xf5\x3f\x1f\x3b\xf8\x62"
"\x8c\x51\xbf\xb1\x7f\xc4\x8c\xed\x98\x05\x27\x30\x08\x18\xa1\xb3"
"\x73\x08\x25\x02\x95\x26\x91\x49\x60\x02\x26\x09\x06\x4e\x92\x70"
"\x0d\x26\x30\xc1\x39\x21\x14\x81\x20\x44\x52\x27\x60\x06\x78\x4a"
"\x8d\xb6\xd2\x53\x88\xc4\x42\xe0\xbe\x12\x0f\xbd\x47\x24\x9a\x40"
"\xff\x89\x23\xf0\x40\xec\x5e\xaf\x57\x28\x95\x4a\x4f\xd2\xe9\xf4"
"\x3d\x58\x1b\xd9\x72\xb3\xd9\x7c\x99\x4e\xa7\x6f\xc6\xe3\xf1\x77"
"\x05\xee\xaa\xd1\x47\x24\xc2\x36\x1c\x8a\x4d\x63\x0f\x87\xc3\x47"
"\xf9\x7c\xfe\xb0\x5a\xad\xde\xcc\x66\xb3\x31\x27\xaf\xd7\xeb\x12"
"\xcc\x3d\x28\x14\x0a\xaf\xfa\xfd\xfe\x87\x04\xdf\x30\x4e\x84\x26"
"\xd7\x3b\x0f\xc0\x9b\xcd\xa6\x93\xc9\x64\xc2\x93\x62\x09\xe6\x5a"
"\xad\xd6\x81\xe3\x38\x2f\x3a\x9d\xce\x2d\xf8\x4f\x1a\xe4\x8a\x32"
"\x69\x64\x4a\x9e\x70\x82\x54\xb9\x5c\x7e\x5e\xab\xd5\x1c\x21\x84"
"\x15\x88\x54\xe3\x4e\x64\x34\x57\xaf\xd7\x6f\x34\x1a\x8d\xa7\x8a"
"\xc0\x36\x7c\xc5\x6c\x62\xf7\x21\x01\xd8\xfc\x2e\xe7\xdc\xf2\x7d"
"\x7f\x17\x0e\x32\x48\x48\xa5\x04\x1f\x78\x61\xa0\x70\x18\xe1\x34"
"\x25\xb5\x7b\xed\x07\x8d\x13\xf3\x81\x49\x94\xf1\x3c\xef\x6c\x4a"
"\x11\xe9\x06\x31\x72\x95\xd8\xfd\x69\xa9\x20\xcc\x14\x2e\x38\x43"
"\x90\xfc\x30\x22\x57\x18\x45\x10\x7b\xf6\x20\x38\xbf\xd8\x51\xf5"
"\x05\xc0\x7f\x78\xae\x77\x7d\x67\x78\x89\xed\x01\xaf\x32\x52\xc1"
"\xcf\xd6\x76\xbb\xfd\x49\x94\x09\xcb\x8c\x22\x9c\x9d\x72\xb9\x5c"
"\x7e\x3c\x3e\x39\x7e\x26\xc0\xc9\x02\x47\x90\xef\x45\x7a\x10\x00"
"\x47\x47\xef\x5e\x2e\x16\x8b\x4f\x28\xc9\x24\xca\xe4\x18\x01\xde"
"\x81\x3f\x18\x0c\xde\x42\x8c\x3f\x76\x3d\x37\x04\x3a\x15\x11\xe9"
"\xae\xeb\x59\xc5\x62\xf1\x21\xac\x7d\x6f\x64\xb2\xa4\x4a\x85\x2e"
"\x11\xb6\x0a\xb9\x34\xe4\xc1\xb5\x6e\xb7\xfb\x1a\xc2\xf0\x3e\x64"
"\xee\x37\x55\x2a\x42\xe7\xe5\x72\xb9\xdb\xab\xd5\xea\xf3\x68\x34"
"\x3a\x9c\xcf\xe7\xbf\x60\xea\x37\xc8\x1f\x90\x2d\x26\xc3\x04\x24"
"\x49\x20\xed\x76\xfb\xa0\x52\xa9\xdc\x01\xbf\xa4\x74\x3d\x9a\xcd"
"\x66\x5f\x27\x93\xc9\x42\x81\x69\xe0\xad\x71\x12\x61\x12\x98\x24"
"\x9a\x08\x97\x00\x6d\x56\x5d\x9a\x75\xa1\xd3\xc0\x1e\xae\xa8\x54"
"\xb9\xe6\x46\x55\xdd\xa7\x5c\xfb\x66\x5f\x48\x6a\x38\x9c\xe8\x0b"
"\x17\x35\x1c\xdc\x07\xc4\x3e\x2d\x93\x13\xed\x92\x8a\x3c\x71\x51"
"\xcb\xbc\x4c\xc3\x67\x09\x37\x88\xc4\xc6\x4f\xdd\x2a\x92\xae\x2c"
"\xec\x32\xd7\x14\x73\xee\xaf\x00\x03\x00\xe2\xd1\x75\x61\x4a\x52"
"\x8f\xc9\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82";