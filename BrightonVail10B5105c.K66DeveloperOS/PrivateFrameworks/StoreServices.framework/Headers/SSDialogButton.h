/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSString;

@interface SSDialogButton : NSObject {
	NSDictionary *_actionDictionary;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *URLTarget;	// G=0x35862871; 
@property(readonly, assign, nonatomic) id actionParameter;	// G=0x358627c5; 
@property(readonly, assign, nonatomic) NSString *buttonAction;	// G=0x35862829; 
@property(readonly, assign, nonatomic) NSString *buttonTitle;	// G=0x3586278d; 
- (id)init;	// 0x35862655
- (id)initWithTitle:(id)title actionDictionary:(id)dictionary;	// 0x35862669
// declared property getter: - (id)URLTarget;	// 0x35862871
// declared property getter: - (id)actionParameter;	// 0x358627c5
// declared property getter: - (id)buttonAction;	// 0x35862829
// declared property getter: - (id)buttonTitle;	// 0x3586278d
- (void)dealloc;	// 0x35862729
- (id)valueForActionProperty:(id)actionProperty;	// 0x3586288d
@end
