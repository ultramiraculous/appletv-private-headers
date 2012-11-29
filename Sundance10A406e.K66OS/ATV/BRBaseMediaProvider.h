/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRMediaProvider.h"
#import "BRMediaLoading.h"


__attribute__((visibility("hidden")))
@interface BRBaseMediaProvider : XXUnknownSuperclass <BRMediaProvider, BRMediaLoading> {
	int _providerStatus;	// 4 = 0x4
	BOOL _passwordProtected;	// 8 = 0x8
}
@property(assign) BOOL isPasswordProtected;	// G=0x366af5; S=0x366b05; converted property
@property(assign) int status;	// G=0x3669c1; S=0x3669e9; converted property
+ (id)errorStateOfProvider:(id)provider;	// 0x3666f1
+ (id)mediaProvider;	// 0x366731
- (BOOL)autoload;	// 0x366add
- (long)countOfObjectsWithMediaType:(id)mediaType;	// 0x366b2d
- (void)dealloc;	// 0x36676d
- (int)errorCodeForProvider;	// 0x3669e5
- (void)flush;	// 0x366b29
// converted property getter: - (BOOL)isPasswordProtected;	// 0x366af5
- (int)load;	// 0x366aad
- (int)loadWithUsername:(id)username password:(id)password;	// 0x366abd
- (id)mediaForEntityName:(id)entityName;	// 0x3667f9
- (id)mediaTypes;	// 0x3667dd
- (id)objectsWithEntityName:(id)entityName qualifiedByPredicate:(id)predicate sortDescriptors:(id)descriptors error:(id *)error;	// 0x366815
- (id)objectsWithEntityName:(id)entityName qualifiedByPredicate:(id)predicate sortDescriptors:(id)descriptors excludeHiddenObjects:(BOOL)objects error:(id *)error;	// 0x366845
- (id)providerID;	// 0x3667c9
- (id)providerName;	// 0x3667cd
- (void)reset;	// 0x366ae1
// converted property setter: - (void)setIsPasswordProtected:(BOOL)aProtected;	// 0x366b05
// converted property setter: - (void)setStatus:(int)status;	// 0x3669e9
// converted property getter: - (int)status;	// 0x3669c1
- (int)unload;	// 0x366acd
@end
