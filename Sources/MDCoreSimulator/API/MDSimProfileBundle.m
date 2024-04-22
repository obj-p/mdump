#import "MDSimProfileBundle.h"

#import <objc/runtime.h>

MD_PROXY_IGNORED_IMPL_BEGIN
@implementation MDSimProfileBundle

@dynamic localInfoDictionary, infoPlistPath;

MD_PROXY_LOOKUP_TARGET_CLASS_IMPL(SimProfileBundle)

+ (NSDictionary *)extraCheckMap
{
    return [self.targetClass extraCheckMap];
}

- (instancetype)initWithPath:(NSString *)path error:(NSError **)error
{
    id target = [[self.class.targetClass alloc] initWithPath:path error:error];

    if (target == NULL) {
        return NULL;
    }

    return [super initWithTarget:target];
}

@end
MD_PROXY_IGNORED_IMPL_END
