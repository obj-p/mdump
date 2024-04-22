#import <Foundation/Foundation.h>

#define MD_PROXY_IGNORED_IMPL_BEGIN    \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wincomplete-implementation\"")

#define MD_PROXY_IGNORED_IMPL_END _Pragma("clang diagnostic pop")

#define MD_PROXY_LOOKUP_TARGET_CLASS_IMPL(name) \
+ (Class)targetClass {                          \
    static Class klass;                         \
    static dispatch_once_t onceToken;           \
    dispatch_once(&onceToken, ^{                \
        klass = objc_lookUpClass(#name);        \
    });                                         \
    return klass;                               \
}

NS_ASSUME_NONNULL_BEGIN
@interface MDProxy : NSProxy

@property (readonly, class, nonatomic) Class targetClass;
@property (readonly, nonatomic) id target;

- (instancetype)initWithTarget:(id)target;

@end
NS_ASSUME_NONNULL_END
