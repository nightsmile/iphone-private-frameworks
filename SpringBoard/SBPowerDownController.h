/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlert.h"
#import <Availability2.h>

@class SBPowerDownView;

@interface SBPowerDownController : SBAlert {
	int _count;
	id _delegate;
	SBPowerDownView* _powerDownView;
	BOOL _isFront;
}
+(id)sharedInstance;
// inherited: -(void)dealloc;
// inherited: -(double)autoLockTime;
-(BOOL)isOrderedFront;
-(void)orderFront;
-(void)orderOut;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(id)powerDownViewWithSize:(CGSize)size;
#else
-(id)powerDownView;
#endif
// inherited: -(void)activate;
-(void)_restoreIconListIfNecessary;
// inherited: -(void)deactivate;
// inherited: -(id)alertDisplayViewWithSize:(CGSize)size;
-(void)alertDisplayWillBecomeVisible;
-(void)setDelegate:(id)delegate;
-(void)powerDown;
-(void)cancel;
@end

