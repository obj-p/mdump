#import <Foundation/Foundation.h>

@protocol SimServiceContextProtocol

@property (readonly, nonatomic, nonnull) NSArray <NSObject *> *supportedDeviceTypes;

- (nonnull NSArray *)allDeviceSets;

+ (nullable instancetype)sharedServiceContextForDeveloperDir:(nonnull NSString *)dir
                                                       error:(NSError * _Nullable * _Nullable)error;

@end
