#import <MDCoreSimulator/MDSimDeviceTypeProxy.h>
#import <MDCoreSimulator/MDSimServiceContextProxy.h>
#import <MDFramework/Macros.h>
#import <objc/runtime.h>

MD_IGNORED_PROTOCOL_BEGIN
@implementation MDSimServiceContextProxy

- (NSArray *)supportedDeviceTypes
{
    NSMutableArray *simDeviceTypes = [NSMutableArray array];
    [[self.target supportedDeviceTypes] enumerateObjectsUsingBlock:^(id _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        [simDeviceTypes addObject:[[MDSimDeviceTypeProxy alloc] initWithTarget:obj]];
    }];

    return simDeviceTypes;
}

+ (instancetype)sharedServiceContextForDeveloperDir:(NSString *)dir error:(NSError **)error {
    Class klass = objc_lookUpClass("SimServiceContext");
    id target = [klass sharedServiceContextForDeveloperDir:dir error:error];
    
    if (target == NULL) {
        return NULL;
    }
    
    return [[MDSimServiceContextProxy alloc] initWithTarget:target];
}

@end
MD_IGNORED_PROTOCOL_END
