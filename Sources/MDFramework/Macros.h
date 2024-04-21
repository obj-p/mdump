#define MD_IGNORED_PROTOCOL_BEGIN \
_Pragma("clang diagnostic push")  \
_Pragma("clang diagnostic ignored \"-Wprotocol\"")

#define MD_IGNORED_PROTOCOL_END _Pragma("clang diagnostic pop")
