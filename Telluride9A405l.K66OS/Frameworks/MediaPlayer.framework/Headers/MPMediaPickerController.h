/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIViewController.h> // Unknown library
#import "MediaPlayer-Structs.h"
#import "UIScrollViewDelegate.h"
#import "MediaPickerModalContextDelegate.h"

@class NSString, MPMediaPickerControllerInternal;
@protocol MPMediaPickerControllerDelegate;

@interface MPMediaPickerController : UIViewController <MediaPickerModalContextDelegate, UIScrollViewDelegate> {
@private
	MPMediaPickerControllerInternal *_internal;	// 156 = 0x9c
}
@property(assign, nonatomic) BOOL allowsPickingMultipleItems;	// G=0x33c0a249; S=0x33c0a26d; 
@property(assign, nonatomic) id<MPMediaPickerControllerDelegate> delegate;	// G=0x33c0a189; S=0x33c0a169; 
@property(readonly, assign, nonatomic) int mediaTypes;	// G=0x33c0a149; 
@property(copy, nonatomic) NSString *prompt;	// G=0x33c0a229; S=0x33c0a1a9; 
+ (void)preheatMediaPicker;	// 0x33c0a2d9
- (id)init;	// 0x33c09cfd
- (id)initWithMediaTypes:(int)mediaTypes;	// 0x33c09d11
- (void)_pickerDidCancel;	// 0x33c0a2e9
- (void)_pickerDidPickItems:(id)_picker;	// 0x33c0a3bd
// declared property getter: - (BOOL)allowsPickingMultipleItems;	// 0x33c0a249
- (void)dealloc;	// 0x33c09dc1
// declared property getter: - (id)delegate;	// 0x33c0a189
- (void)loadView;	// 0x33c09e25
- (void)mediaPickerModalContext:(id)context didPickMediaItems:(id)items;	// 0x33c0a135
// declared property getter: - (int)mediaTypes;	// 0x33c0a149
- (void)modalContextDidDismiss:(id)modalContext withSuccess:(BOOL)success;	// 0x33c0a115
// declared property getter: - (id)prompt;	// 0x33c0a229
// declared property setter: - (void)setAllowsPickingMultipleItems:(BOOL)items;	// 0x33c0a26d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33c0a169
// declared property setter: - (void)setPrompt:(id)prompt;	// 0x33c0a1a9
- (void)viewDidUnload;	// 0x33c0a0b1
@end

