#import <MDFramework/MDProxy.h>

@class MDSimDeviceType;

@interface MDSimServiceContext : MDProxy

@property (readonly, nonatomic, nonnull) NSArray <MDSimDeviceType *> *supportedDeviceTypes;

- (nonnull NSArray *)allDeviceSets;

+ (nullable instancetype)sharedServiceContextForDeveloperDir:(nonnull NSString *)dir
                                                       error:(NSError * _Nullable * _Nullable)error;

@end
