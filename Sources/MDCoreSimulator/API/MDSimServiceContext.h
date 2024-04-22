#import <MDFramework/MDProxy.h>

@class MDSimDeviceType;

@interface MDSimServiceContext : MDProxy

@property (readonly, nonatomic, nonnull) NSArray<MDSimDeviceType *> *supportedDeviceTypes;

+ (nullable instancetype)sharedServiceContextForDeveloperDir:(nonnull NSString *)dir
                                                       error:(NSError *_Nullable *_Nullable)error;

- (nonnull NSArray *)allDeviceSets;

@end
