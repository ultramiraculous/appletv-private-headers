/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSBundle, NSString, NSMutableDictionary;

@interface UIStoryboard : NSObject {
@private
	NSBundle *bundle;	// 4 = 0x4
	NSString *relativePathFromBundle;	// 8 = 0x8
	NSDictionary *identifierToNibNameMap;	// 12 = 0xc
	NSString *designatedEntryPointIdentifier;	// 16 = 0x10
	NSMutableDictionary *identifierToUINibMap;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSBundle *bundle;	// G=0x354273fd; @synthesize
@property(readonly, assign, nonatomic) NSString *designatedEntryPointIdentifier;	// G=0x3542742d; @synthesize
@property(readonly, assign, nonatomic) NSDictionary *identifierToNibNameMap;	// G=0x3542741d; @synthesize
@property(readonly, assign, nonatomic) NSMutableDictionary *identifierToUINibMap;	// G=0x3542743d; @synthesize
@property(readonly, assign, nonatomic) NSString *relativePathFromBundle;	// G=0x3542740d; @synthesize
+ (id)storyboardWithName:(id)name bundle:(id)bundle;	// 0x35426cb1
- (id)initWithBundle:(id)bundle relativePathFromBundle:(id)bundle2 identifierToNibNameMap:(id)nibNameMap designatedEntryPointIdentifier:(id)identifier;	// 0x35426a85
// declared property getter: - (id)bundle;	// 0x354273fd
- (BOOL)containsNibNamed:(id)named;	// 0x35426f45
- (void)dealloc;	// 0x354269e9
// declared property getter: - (id)designatedEntryPointIdentifier;	// 0x3542742d
// declared property getter: - (id)identifierToNibNameMap;	// 0x3542741d
// declared property getter: - (id)identifierToUINibMap;	// 0x3542743d
- (id)instantiateInitialViewController;	// 0x354273bd
- (id)instantiateViewControllerWithIdentifier:(id)identifier;	// 0x35427205
- (id)nibForStoryboardNibNamed:(id)storyboardNibNamed;	// 0x35426fb1
- (id)nibForViewControllerWithIdentifier:(id)identifier;	// 0x354270b1
// declared property getter: - (id)relativePathFromBundle;	// 0x3542740d
@end

