/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <UIKit/UITextView.h>

@class UILabel;

@interface PLTextView : UITextView {
	UILabel* _placeholder;
	BOOL _showingPlaceholder;
}
// inherited: -(void)dealloc;
// inherited: -(void)setContentOffset:(CGPoint)offset;
-(void)updatePlaceholder;
-(id)_placeholder;
-(void)setPlaceholderText:(id)text;
// inherited: -(void)touchesEnded:(id)ended withEvent:(id)event;
@end

