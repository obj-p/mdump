#import <Foundation/Foundation.h>
#import <MDCoreSimulator/SimDeviceTypeProtocol.h>

@protocol SimServiceContextProtocol

@property (readonly, nonatomic) NSArray <MDSimDeviceTypeProxy *> * _Nonnull supportedDeviceTypes;

- (nonnull NSArray *)allDeviceSets;

+ (nullable instancetype)sharedServiceContextForDeveloperDir:(nonnull NSString *)dir
                                                       error:(NSError * _Nullable * _Nullable)error;

@end
