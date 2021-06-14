#include<bits/stdc++.h>

using namespace std;

struct note {
    int data;
    note *trai;
    note *phai;
    note(int x) {
        data = x;
        trai = NULL;
        phai = NULL;
    }
};

void add(int u, int v, char x, note **goc) {
    if((*goc) != NULL && (*goc)->data == u) {
        if(x == 'L') {
            (*goc)->trai = new note(v);
        } else {
            (*goc)->phai = new note(v);
        }
    } else {
        if((*goc)->phai != NULL) {
            add(u, v, x, &(*goc)->phai);
        }
        if((*goc)->trai != NULL) {
            add(u, v, x, &(*goc)->trai);
        }
    }
}

int check(int cap, int &capt, note *goc) {
    cap++;
    if(!goc->trai && !goc->phai) {
        if(capt == -1) {
            capt = cap;
        }
        if(capt != -1 && cap != capt) {
            return 0;
        }
        if(capt != -1 && cap == capt) {
            return 1;
        }
    }
    if(goc->trai)
        if(!check(cap, capt, goc->trai))
            return 0;
    if(goc->phai)
        if(!check(cap, capt, goc->phai))
            return 0;
    return 1;
}


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, u, v;
        char x;
        cin >> n >> u >> v >> x;
        note *goc = new note(u);
        add(u, v, x, &goc);
        for(int i = 1; i < n; i++) {
            cin >> u >> v >> x;
            add(u, v, x, &goc);
        }
        int capt = -1;
        cout << check(0, capt, goc) << endl;
        delete goc;
    }
}