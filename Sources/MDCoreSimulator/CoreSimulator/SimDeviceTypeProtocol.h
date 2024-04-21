#import <Foundation/Foundation.h>

@protocol SimDeviceTypeProtocol

@property (readonly, nonatomic, nullable) NSObject *bundle;
@property (copy, nonatomic, nullable) NSString *modelIdentifier;

- (nullable instancetype)initWithBundle:(nonnull NSObject *)bundle error:(NSError * _Nullable * _Nullable)error;

@end
