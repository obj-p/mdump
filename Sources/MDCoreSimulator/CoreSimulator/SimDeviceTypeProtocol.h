#import <Foundation/Foundation.h>

@class SimProfileBundle;

@protocol SimDeviceTypeProtocol

@property (readonly, nonatomic, nullable) NSBundle *bundle;
@property (copy, nonatomic, nullable) NSString *modelIdentifier;

- (nullable instancetype)initWithBundle:(nonnull NSBundle *)bundle error:(NSError * _Nullable * _Nullable)error;

@end
