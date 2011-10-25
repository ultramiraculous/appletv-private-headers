/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class ICCameraDevice, NSString, ICCameraFolder, NSMutableDictionary, NSDate;

@interface ICCameraItemProperties : NSObject {
	ICCameraDevice *_device;	// 4 = 0x4
	ICCameraFolder *_parentFolder;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	NSString *_UTI;	// 16 = 0x10
	NSDate *_creationDate;	// 20 = 0x14
	NSDate *_modificationDate;	// 24 = 0x18
	BOOL _locked;	// 28 = 0x1c
	NSMutableDictionary *_userData;	// 32 = 0x20
}
@property(retain) NSString *UTI;	// G=0x301aa0f9; S=0x301aa0d5; @synthesize=_UTI
@property(retain) NSDate *creationDate;	// G=0x301aa135; S=0x301aa111; @synthesize=_creationDate
@property(assign) ICCameraDevice *device;	// G=0x301a9ac5; S=0x301a9ad5; @synthesize=_device
@property(assign) BOOL locked;	// G=0x301a9a85; S=0x301a9a95; @synthesize=_locked
@property(retain) NSDate *modificationDate;	// G=0x301aa171; S=0x301aa14d; @synthesize=_modificationDate
@property(retain) NSString *name;	// G=0x301aa0bd; S=0x301aa099; @synthesize=_name
@property(assign) ICCameraFolder *parentFolder;	// G=0x301a9aa5; S=0x301a9ab5; @synthesize=_parentFolder
@property(retain) NSMutableDictionary *userData;	// G=0x301aa1ad; S=0x301aa189; @synthesize=_userData
// declared property getter: - (id)UTI;	// 0x301aa0f9
// declared property getter: - (id)creationDate;	// 0x301aa135
- (void)dealloc;	// 0x301a9fe1
// declared property getter: - (id)device;	// 0x301a9ac5
- (void)finalize;	// 0x301aa1c5
// declared property getter: - (BOOL)locked;	// 0x301a9a85
// declared property getter: - (id)modificationDate;	// 0x301aa171
// declared property getter: - (id)name;	// 0x301aa0bd
// declared property getter: - (id)parentFolder;	// 0x301a9aa5
// declared property setter: - (void)setCreationDate:(id)date;	// 0x301aa111
// declared property setter: - (void)setDevice:(id)device;	// 0x301a9ad5
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0x301a9a95
// declared property setter: - (void)setModificationDate:(id)date;	// 0x301aa14d
// declared property setter: - (void)setName:(id)name;	// 0x301aa099
// declared property setter: - (void)setParentFolder:(id)folder;	// 0x301a9ab5
// declared property setter: - (void)setUTI:(id)uti;	// 0x301aa0d5
// declared property setter: - (void)setUserData:(id)data;	// 0x301aa189
// declared property getter: - (id)userData;	// 0x301aa1ad
@end

