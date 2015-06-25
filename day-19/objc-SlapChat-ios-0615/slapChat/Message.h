//
//  Message.h
//  slapChat
//
//  Created by Timothy Clem on 6/25/15.
//  Copyright (c) 2015 Joe Burgess. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Message : NSManagedObject

@property (nonatomic, retain) NSString * content;
@property (nonatomic, retain) NSDate * createAt;

@end
