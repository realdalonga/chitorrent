#pragma once
#include <vector>
#include "decodedTorrent.h"
namespace chit {

class TorrentFileParser {

private:
  static int decodeInt() const;
  static std::vector decodeList() const;

public:
  DecodedTorrent decode(const std::string&) const;

};
 
}
