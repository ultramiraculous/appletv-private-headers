/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <UIView.h> // Unknown library
#import "ToneLibrary-Structs.h"

@class TLToneTableController, UITableView, NSString;

@interface TLTonePicker : UIView {
	UITableView *_table;	// 84 = 0x54
	TLToneTableController *_tableController;	// 88 = 0x58
	id _delegate;	// 92 = 0x5c
	Class _customTableViewClass;	// 96 = 0x60
}
@property(assign) BOOL allowsDeletingCurrentSystemVibration;	// G=0x35e05a6d; S=0x35e05a91; converted property
@property(assign, nonatomic) id delegate;	// G=0x35e05df5; S=0x35e055b5; @synthesize=_delegate
@property(retain) id selectedRingtoneIdentifier;	// G=0x35e058a9; S=0x35e0586d; converted property
@property(retain) id selectedVibrationIdentifier;	// G=0x35e05ab1; S=0x35e05ad1; converted property
@property(retain, nonatomic) NSString *vibrationAccountIdentifier;	// G=0x35e0536d; S=0x35e0538d; @dynamic
+ (id)ringtonePickerWithFrame:(CGRect)frame;	// 0x35e04f7d
+ (id)texttonePickerWithFrame:(CGRect)frame;	// 0x35e04fe5
+ (id)tonePickerWithFrame:(CGRect)frame;	// 0x35e05051
- (id)initWithFrame:(CGRect)frame;	// 0x35e04ec1
- (id)initWithFrame:(CGRect)frame avController:(id)controller;	// 0x35e04eed
- (id)initWithFrame:(CGRect)frame avController:(id)controller filter:(unsigned)filter tonePicker:(BOOL)picker;	// 0x35e04f21
- (void)_buildTable;	// 0x35e05685
- (void)_reloadData;	// 0x35e05189
- (void)addMediaItems:(id)items;	// 0x35e05971
// converted property getter: - (BOOL)allowsDeletingCurrentSystemVibration;	// 0x35e05a6d
- (void)buildUIWithAVController:(id)avcontroller filter:(unsigned)filter tonePicker:(BOOL)picker;	// 0x35e055f9
- (float)contentHeight;	// 0x35e05ca1
- (void)dealloc;	// 0x35e050bd
// declared property getter: - (id)delegate;	// 0x35e05df5
- (void)didMoveToWindow;	// 0x35e05af1
- (void)displayScrollerIndicators;	// 0x35e05b95
- (void)finishedWithPicker;	// 0x35e05bf5
- (void)layoutSubviews;	// 0x35e05b49
- (void)removeMediaItems:(id)items;	// 0x35e05991
- (void)ringtoneManagerContentsChanged:(id)changed;	// 0x35e0580d
- (void)ringtoneTableController:(id)controller selectedMediaItemWithIdentifier:(id)identifier;	// 0x35e05d3d
- (void)ringtoneTableController:(id)controller selectedRingtoneWithIdentifier:(id)identifier;	// 0x35e05ce1
- (void)ringtoneTableController:(id)controller willPlayRingtoneWithIdentifier:(id)identifier;	// 0x35e05d99
- (id)selectedIdentifier:(BOOL *)identifier;	// 0x35e058c9
// converted property getter: - (id)selectedRingtoneIdentifier;	// 0x35e058a9
// converted property getter: - (id)selectedVibrationIdentifier;	// 0x35e05ab1
- (void)setAVController:(id)controller;	// 0x35e0522d
// converted property setter: - (void)setAllowsDeletingCurrentSystemVibration:(BOOL)vibration;	// 0x35e05a91
- (void)setContext:(int)context;	// 0x35e05579
- (void)setCustomTableViewCellClass:(Class)aClass;	// 0x35e05c65
- (void)setCustomTableViewClass:(Class)aClass;	// 0x35e05c15
- (void)setDefaultIdentifier:(id)identifier;	// 0x35e05331
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35e055b5
- (void)setMediaAtTop:(BOOL)top;	// 0x35e054b1
- (void)setNoneAtTop:(BOOL)top;	// 0x35e052e5
- (void)setNoneString:(id)string;	// 0x35e053ad
- (void)setSelectedMediaIdentifier:(id)identifier;	// 0x35e058e9
// converted property setter: - (void)setSelectedRingtoneIdentifier:(id)identifier;	// 0x35e0586d
// converted property setter: - (void)setSelectedVibrationIdentifier:(id)identifier;	// 0x35e05ad1
- (void)setShowsDefault:(BOOL)aDefault;	// 0x35e05289
- (void)setShowsDefaultVibration:(BOOL)vibration;	// 0x35e059ed
- (void)setShowsMedia:(BOOL)media;	// 0x35e05425
- (void)setShowsNoVibrationSelected:(BOOL)selected;	// 0x35e05a4d
- (void)setShowsNone:(BOOL)none;	// 0x35e052c5
- (void)setShowsNoneVibration:(BOOL)vibration;	// 0x35e05a2d
- (void)setShowsNothingSelected:(BOOL)selected;	// 0x35e053e9
- (void)setShowsRingtonesStore:(BOOL)store;	// 0x35e0524d
- (void)setShowsStoreButtonInNavigationBar:(BOOL)navigationBar;	// 0x35e0553d
- (void)setShowsUserGeneratedVibrations:(BOOL)vibrations;	// 0x35e05a0d
- (void)setShowsVibrations:(BOOL)vibrations;	// 0x35e059b1
// declared property setter: - (void)setVibrationAccountIdentifier:(id)identifier;	// 0x35e0538d
- (void)stopPlaying;	// 0x35e05bb5
- (void)stopPlayingWithFadeOut:(BOOL)fadeOut;	// 0x35e05bd5
// declared property getter: - (id)vibrationAccountIdentifier;	// 0x35e0536d
@end

