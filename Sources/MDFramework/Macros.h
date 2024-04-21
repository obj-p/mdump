#define MD_IGNORED_PROTOCOL_BEGIN \
_Pragma("clang diagnostic push")  \
_Pragma("clang diagnostic ignored \"-Wincomplete-implementation\"")

#define MD_IGNORED_PROTOCOL_END _Pragma("clang diagnostic pop")
