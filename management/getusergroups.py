# Copyright (c) 2010-2011 OpenStack, LLC.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
# implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import optparse
import keystone.db.sqlalchemy.api as db_api


def main():
    usage = "usage: %prog user_id"
    parser = optparse.OptionParser(usage)
    options, args = parser.parse_args()
    if len(args) != 1:
        parser.error("Incorrect number of arguments")
    else:
        username = args[0]
        try:
            g = db_api.user_groups(username)
            if g == None:
                raise IndexError("User groups not found")
            for row in g:
                print row
        except Exception, e:
            print 'Error getting user groups for user', user_id, ':', str(e)

if __name__ == '__main__':
    main()
