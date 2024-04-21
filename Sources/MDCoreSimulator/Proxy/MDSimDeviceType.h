#import <MDFramework/MDProxy.h>

@class MDSimProfileBundle;

@interface MDSimDeviceType : MDProxy

@property (readonly, nonatomic, nullable) MDSimProfileBundle *bundle;
@property (copy, nonatomic, nullable) NSString *modelIdentifier;

- (nullable instancetype)initWithBundle:(nonnull MDSimProfileBundle *)bundle 
                                  error:(NSError * _Nullable * _Nullable)error;

@end
