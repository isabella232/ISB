(function($) {

    Drupal.behaviors.standardNodeForm = {
        attach: function (context, settings) {

            // Hide empty columns in controlled list
            var currentColumn = 15;
            $('.field-name-field-controlled-list-labels .field-multiple-table td input').each(function(index) {
                if (!$(this).val()) {
                    var split  = $(this).attr('id').split('-');
                    var column = parseInt(split[9]);
                    if (column < currentColumn) {
                        currentColumn = column;
                    }
                    hideControlledListsColumn(column);
                }
            });
            $('#field-controlled-list-labels-values td:last').html('<a class="column-add" href="#">Add column</a><br /><a class="column-remove" href="#">Remove column</a>');
            setControlledListsCurrentColumn(currentColumn);

            // Hide empty columns in data definitions
            var currentColumn = 15;
            $('.field-name-field-data-definitions-labels .field-multiple-table td input').each(function(index) {
                if (!$(this).val()) {
                    var split = $(this).attr('id').split('-');
                    var column = parseInt(split[13]);
                    if (column < currentColumn) {
                        currentColumn = column;
                    }
                    hideDataDefinitionsColumn(column);
                }
            });
            $('#field-data-definitions-labels-values td:last').html('<a class="column-add" href="#">Add column</a><br /><a class="column-remove" href="#">Remove column</a>');
            setDataDefinitionsCurrentColumn(currentColumn);

            $('#field-controlled-list-labels-values .column-add').click(function(event) {
                event.preventDefault();
                var currentColumn = parseInt($(this).parent().attr('column'));
                if (currentColumn < 16) {
                    showControlledListsColumn(currentColumn);
                    currentColumn++;
                    setControlledListsCurrentColumn(currentColumn);
                }
            });
            $('#field-controlled-list-labels-values .column-remove').click(function(event) {
                event.preventDefault();
                var currentColumn = parseInt($(this).parent().attr('column'));
                if (currentColumn > 2) {
                    hideControlledListsColumn(currentColumn - 1);
                    currentColumn--;
                    setControlledListsCurrentColumn(currentColumn);
                }
            });

            $('#field-data-definitions-labels-values .column-add').click(function(event) {
                event.preventDefault();
                var currentColumn = parseInt($(this).parent().attr('column'));
                if (currentColumn < 16) {
                    showDataDefinitionsColumn(currentColumn);
                    currentColumn++;
                    setDataDefinitionsCurrentColumn(currentColumn);
                }
            });
            $('#field-data-definitions-labels-values .column-remove').click(function(event) {
                event.preventDefault();
                var currentColumn = parseInt($(this).parent().attr('column'));
                if (currentColumn > 2) {
                    hideDataDefinitionsColumn(currentColumn - 1);
                    currentColumn--;
                    setDataDefinitionsCurrentColumn(currentColumn);
                }
            });


        }
    };

    function hideControlledListsColumn(column) {
        $('#field-controlled-list-labels-values thead tr th.field-label label:contains("Label for column #' + column + '")').parents('th').hide();
        $('#edit-field-controlled-list-values .field-multiple-table thead tr th.field-label label:contains("Column #' + column + '")').parents('th').hide();
        $('#edit-field-controlled-list-labels-und-0-field-label-' + column).parent().hide();
        $('#edit-field-controlled-list-values .field-name-field-column-' + column).parent().hide();
    }
    function showControlledListsColumn(column) {
        $('#field-controlled-list-labels-values thead tr th.field-label label:contains("Label for column #' + column + '")').parents('th').show();
        $('#edit-field-controlled-list-values .field-multiple-table thead tr th.field-label label:contains("Column #' + column + '")').parents('th').show();
        $('#edit-field-controlled-list-labels-und-0-field-label-' + column).parent().show();
        $('#edit-field-controlled-list-values .field-name-field-column-' + column).parent().show();
    }
    function setControlledListsCurrentColumn(currentColumn) {
        $('#field-controlled-list-labels-values td:last').attr('column', currentColumn);
    }




    function hideDataDefinitionsColumn(column) {
        $('#field-data-definitions-labels-values thead tr th.field-label label:contains("Label for column #' + column + '")').parents('th').hide();
        $('#edit-field-entities-und-0-field-data-definitions-values .field-multiple-table thead tr th.field-label label:contains("Column #' + column + '")').parents('th').hide();
        $('#edit-field-entities-und-0-field-data-definitions-labels-und-0-field-label-' + column).parent().hide();
        $('#edit-field-entities-und-0-field-data-definitions-values .field-name-field-column-' + column).parent().hide();
    }
    function showDataDefinitionsColumn(column) {
        $('#field-data-definitions-labels-values thead tr th.field-label label:contains("Label for column #' + column + '")').parents('th').show();
        $('#edit-field-entities-und-0-field-data-definitions-values .field-multiple-table thead tr th.field-label label:contains("Column #' + column + '")').parents('th').show();
        $('#edit-field-entities-und-0-field-data-definitions-labels-und-0-field-label-' + column).parent().show();
        $('#edit-field-entities-und-0-field-data-definitions-values .field-name-field-column-' + column).parent().show();
    }
    function setDataDefinitionsCurrentColumn(currentColumn) {
        $('#field-data-definitions-labels-values td:last').attr('column', currentColumn);
    }

})(jQuery);
