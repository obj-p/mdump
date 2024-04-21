#import <Foundation/Foundation.h>

@class SimProfileBundle;

@protocol SimDeviceTypeProtocol

@property (retain, nonatomic, nullable) SimProfileBundle *bundle;
@property (copy, nonatomic, nullable) NSString *modelIdentifier;

- (nonnull id)foobar;
- (nullable instancetype)initWithBundle:(nonnull NSBundle *)bundle error:(NSError * _Nullable * _Nullable)error;

@end
