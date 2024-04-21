@import Foundation;

#import <MDCoreSimulator/SimServiceContextProtocol.h>

@interface MDSimServiceContextProxy : NSProxy <SimServiceContextProtocol>

- (instancetype)init;

@end
