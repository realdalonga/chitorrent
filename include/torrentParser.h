class TorrentParser {
public:
  DecodedTorrent decode(const std::string&) const;
};

struct DecodedTorrent {
  size_t length;
}
