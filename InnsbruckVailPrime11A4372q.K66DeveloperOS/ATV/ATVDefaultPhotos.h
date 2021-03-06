/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRPhotoMediaCollection.h"


__attribute__((visibility("hidden")))
@interface ATVDefaultPhotos : BRPhotoMediaCollection {
	int _photosType;	// 44 = 0x2c
}
+ (id)appleDefaultPhotos:(int)photos;	// 0x100591
+ (id)appleDefaultPhotosCollection:(int)collection;	// 0x100865
+ (int)unsetDefaultPhotosType;	// 0x100941
- (id)initWithPhotosType:(int)photosType;	// 0x100945
- (id)collectionID;	// 0x1009d1
- (id)collectionName;	// 0x100989
- (id)mediaAssets;	// 0x100a15
@end

