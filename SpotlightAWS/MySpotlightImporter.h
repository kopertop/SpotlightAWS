//
//  MySpotlightImporter.h
//  SpotlightAWS
//
//  Created by Chris Moyer on 6/5/14.
//  Copyright (c) 2014 Chris Moyer. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MySpotlightImporter : NSObject

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (BOOL)importFileAtPath:(NSString *)filePath attributes:(NSMutableDictionary *)attributes error:(NSError **)error;

@end
