#import <Foundation/Foundation.h>
#import <MDCoreSimulator/SimServiceContextProtocol.h>

@interface MDSimServiceContextProxy : NSProxy <SimServiceContextProtocol>

- (instancetype)init;

@end
