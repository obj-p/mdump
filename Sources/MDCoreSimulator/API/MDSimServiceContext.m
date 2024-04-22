#import "MDSimDeviceType.h"

#import <objc/runtime.h>
#import "MDSimServiceContext.h"

MD_PROXY_IGNORED_IMPL_BEGIN
@implementation MDSimServiceContext

@dynamic supportedDeviceTypes;

MD_PROXY_LOOKUP_TARGET_CLASS_IMPL(SimServiceContext)

+ (instancetype)sharedServiceContextForDeveloperDir:(NSString *)dir error:(NSError **)error
{
    id target = [self.targetClass sharedServiceContextForDeveloperDir:dir error:error];

    if (target == NULL) {
        return NULL;
    }

    return [[self alloc] initWithTarget:target];
}

- (NSArray *)supportedDeviceTypes
{
    NSMutableArray *supportedDeviceTypes = [[NSMutableArray alloc] init];
    [[self.target supportedDeviceTypes]
        enumerateObjectsUsingBlock:^(id _Nonnull obj, NSUInteger idx, BOOL *_Nonnull stop) {
          [supportedDeviceTypes addObject:[[MDSimDeviceType alloc] initWithTarget:obj]];
        }];
    return supportedDeviceTypes;
}

@end
MD_PROXY_IGNORED_IMPL_END
