/**
 * Copyright (c) 2013, Pecunia Project. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; version 2 of the
 * License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301  USA
 */

#import <Cocoa/Cocoa.h>

@interface AttachmentImageView : NSImageView <NSDraggingSource, NSDraggingDestination>
{
@private
    id       observedObject;
    NSString *observedKeyPath;
    BOOL     highlight;
    BOOL     dragPending;
}

@property (nonatomic, strong) NSString *reference;

- (void)processAttachment: (NSURL *)url;
- (void)openReference;

@end

