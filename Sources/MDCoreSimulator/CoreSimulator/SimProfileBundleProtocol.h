#import <Foundation/Foundation.h>

@protocol SimProfileBundleProtocol

@property (retain, nonatomic) NSDictionary *localInfoDictionary;
@property (retain, nonatomic) NSString *infoPlistPath;

+ (id)extraCheckMap;

- (BOOL)isEqualToProfile:(id)profile;

@end
