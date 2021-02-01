#import <Foundation/Foundation.h>

@protocol AnalyticsPreSessionActor

- (void)executePreSessionActionWithCompletion:(void (^)())completion;

@end