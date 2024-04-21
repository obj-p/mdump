#import "MDSimDeviceType.h"
#import "MDSimProfileBundle.h"

#import <objc/runtime.h>

MD_PROXY_IGNORED_IMPL_BEGIN
@implementation MDSimDeviceType

@dynamic bundle, modelIdentifier;

MD_PROXY_LOOKUP_TARGET_CLASS_IMPL(SimDeviceType)

- (MDSimProfileBundle *)bundle {
    return [[MDSimProfileBundle alloc] initWithTarget:[self.target bundle]];
}

- (instancetype)initWithBundle:(NSBundle *)bundle error:(NSError **)error
{
    id target = [[self.class.targetClass alloc] initWithBundle:bundle error:error];
    
    if (target == NULL) {
        return NULL;
    }
    
    return [super initWithTarget:target];
}

@end
MD_PROXY_IGNORED_IMPL_END
