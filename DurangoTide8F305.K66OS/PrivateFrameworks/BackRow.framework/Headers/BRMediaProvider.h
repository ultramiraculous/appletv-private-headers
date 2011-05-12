/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "NSObject.h"


@protocol BRMediaProvider <NSObject>
@property(assign) BOOL isPasswordProtected;	// converted property
- (BOOL)autoload;
- (long)countOfObjectsWithMediaType:(id)mediaType;
- (void)flush;
// converted property getter: - (BOOL)isPasswordProtected;
- (id)machineID;
- (id)mediaTypes;
- (id)objectsWithEntityName:(id)entityName qualifiedByPredicate:(id)predicate sortDescriptors:(id)descriptors error:(id *)error;
- (id)objectsWithEntityName:(id)entityName qualifiedByPredicate:(id)predicate sortDescriptors:(id)descriptors excludeHiddenObjects:(BOOL)objects error:(id *)error;
- (id)providerID;
- (id)providerName;
- (void)reset;
// converted property setter: - (void)setIsPasswordProtected:(BOOL)aProtected;
- (int)status;
@end
