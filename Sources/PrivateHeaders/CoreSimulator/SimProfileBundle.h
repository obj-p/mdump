@import Foundation;

@interface SimProfileBundle : NSObject

@property (nonatomic) struct __CFBundle *cfBundle;
@property (retain, nonatomic) NSURL *bundleURL;
@property (retain, nonatomic) NSString *bundlePath;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSDictionary *infoDictionary;
@property (retain, nonatomic) NSDictionary *localInfoDictionary;
@property (retain, nonatomic) Class principalClass;
@property (nonatomic) void * binaryHandle;
@property (retain, nonatomic) NSString *infoPlistPath;
@property (nonatomic) struct timespec ctime;
@property (readonly, nonatomic) NSDictionary *fileToTimeMap;

+ (id)extraCheckMap;
+ (id)bundleWithURL:(id)url error:(id *)error;
+ (id)bundleWithPath:(id)path error:(id *)error;
+ (id)bundleWithPath:(id)path loadBundle:(BOOL)bundle error:(id *)error;

- (id)initWithURL:(id)url error:(id *)error;
- (id)initWithURL:(id)url loadBundle:(BOOL)bundle error:(id *)error;
- (id)initWithPath:(id)path error:(id *)error;
- (id)initWithPath:(id)path loadBundle:(BOOL)bundle error:(id *)error;
- (void)dealloc;
- (BOOL)loadBundleWithError:(id *)error;
- (id)description;
- (id)pathForResource:(id)resource ofType:(id)type;
- (id)URLForResource:(id)resource withExtension:(id)extension;
- (id)objectForInfoDictionaryKey:(id)key;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToProfile:(id)profile;
- (unsigned long long)filesystemStatus;
@end
