#import <React/RCTView.h>
#import <React/RCTComponent.h>

@interface CTKBannerView : RCTView

@property (nonatomic, copy) RCTBubblingEventBlock onAdPress;
@property (nonatomic, copy) RCTBubblingEventBlock onAdError;

@property (nonatomic, strong) NSNumber *size;
@property (nonatomic, strong) NSString *placementId;

@end
