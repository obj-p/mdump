#import <MDFramework/MDFramework.h>

@interface MDSimProfileBundle : MDProxy

@property (retain, nonatomic, nonnull) NSDictionary *localInfoDictionary;
@property (retain, nonatomic, nonnull) NSString *infoPlistPath;

+ (nonnull NSDictionary *)extraCheckMap;

- (nullable instancetype)initWithPath:(nonnull NSString *)path error:(NSError *_Nullable *_Nullable)error;
- (BOOL)isEqualToProfile:(nullable id)profile;

@end
