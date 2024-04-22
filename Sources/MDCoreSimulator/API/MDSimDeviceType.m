#import "MDSimDeviceType.h"

#import <objc/runtime.h>
#import "MDSimProfileBundle.h"

MD_PROXY_IGNORED_IMPL_BEGIN
@implementation MDSimDeviceType

@dynamic bundle, modelIdentifier;

MD_PROXY_LOOKUP_TARGET_CLASS_IMPL(SimDeviceType)

- (MDSimProfileBundle *)bundle
{
    return [[MDSimProfileBundle alloc] initWithTarget:[self.target bundle]];
}

- (instancetype)initWithBundle:(MDSimProfileBundle *)bundle error:(NSError **)error
{
    id target = [[self.class.targetClass alloc] initWithBundle:bundle.target error:error];

    if (target == NULL) {
        return NULL;
    }

    return [super initWithTarget:target];
}

- (BOOL)isEqualToProfile:(nullable id)profile
{
    if ([profile isKindOfClass:self.class]) {
        return [self.target isEqualToProfile:[profile target]];
    }

    return [self.target isEqualToProfile:profile];
}

@end
MD_PROXY_IGNORED_IMPL_END
