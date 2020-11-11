function out = blur(img,w)
    % convert to double for doing calculations
    imgD = double(img);
    [row, col] = size(img);
    out = zeros(row, col);
    for ii = 1:row
        for jj = 1:col
            % Get the indices for a submatrix
            r1 = ii-w;
            r2 = ii+w;
            c1 = jj-w;
            c2 = jj+w;
            % Test that indices are valid
            % If not, set to min/max that is valid
            if r1 < 1
                r1 = 1;
            end
            if r2 > row
                r2 = row;
            end
            if c1 < 1
                c1 = 1;
            end
            if c2 > col
                c2 = col;
            end
            % Get the submatrix and assign the mean to the output pixel
            m = imgD(r1:r2, c1:c2);
            out(ii,jj) = mean(m(:));
        end
    end
    % convert back to uint8
    out = uint8(out);
end
