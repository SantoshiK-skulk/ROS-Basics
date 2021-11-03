position_marker.header.frame_id = map_frame;
        position_marker.header.stamp =  ros::Time::now();
        position_marker.ns =  "work_space";
        position_marker.action = visualization_msgs::Marker::ADD;
        position_marker.pose.orientation.w = 1.0;

        position_marker.id = 0; 
        // my_changes ------------------------
        position_marker.type = visualization_msgs::Marker::POINTS;
        // my_changes_end---------------------
        //position_marker.type = visualization_msgs::Marker::CYLINDER;

        position_marker.scale.z = 0.5; // Original:0.05;

        position_marker.lifetime = ros::Duration(100);

        //yellow marker
        position_marker.color.r = 0.0f;// Original:1.0f;
        position_marker.color.g = 0.0f; // Original:1.0f;
        position_marker.color.b =  1.0f;// Original: 0.0f;
        position_marker.color.a = 1.5;// Original:0.5;

        target_marker = position_marker;

        // my_changes ------------------------
        position_marker.type = visualization_msgs::Marker::POINTS;
        // my_changes_end---------------------
        //target_marker.type = visualization_msgs::Marker::ARROW;
        //red marker
        target_marker.color.g =  1.0f;// Original:0.0f;

        //////// ORIGINAL//////////////////////
        position_marker.header.frame_id = map_frame;
        position_marker.header.stamp =  ros::Time::now();
        position_marker.ns =  "work_space";
        position_marker.action = visualization_msgs::Marker::ADD;
        position_marker.pose.orientation.w = 1.0;

        position_marker.id = 0;

        position_marker.type = visualization_msgs::Marker::CYLINDER;

        position_marker.scale.z = 0.05;

        position_marker.lifetime = ros::Duration(100);

        //yellow marker
        position_marker.color.r = 1.0f;
        position_marker.color.g = 1.0f;
        position_marker.color.b = 0.0f;
        position_marker.color.a = 0.5;

        target_marker = position_marker;
        target_marker.type = visualization_msgs::Marker::ARROW;
        //red marker
        target_marker.color.g = 0.0f;
        