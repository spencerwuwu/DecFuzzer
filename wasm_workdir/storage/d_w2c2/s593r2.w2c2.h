#ifndef s593r2_H
#define s593r2_H

#include "w2c2_base.h"

typedef struct s593r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s593r2Instance;

void f0(s593r2Instance*);

void f1(s593r2Instance*);

U32 f2(s593r2Instance*);

void f3(s593r2Instance*,U32);

U32 f4(s593r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s593r2Instance*,U32,U32,U32,U32,U32);

void f6(s593r2Instance*,U32);

void f7(s593r2Instance*,U32,U32,U32);

void f8(s593r2Instance*,U32,U32,U32);

void s593r2____wasm_call_ctors(s593r2Instance*i);

void s593r2____wasm_apply_data_relocs(s593r2Instance*i);

U32 s593r2_func_1(s593r2Instance*i);

void s593r2_call_cb(s593r2Instance*i,U32 l0);

void s593r2Instantiate(s593r2Instance* instance, void* resolve(const char* module, const char* name));

void s593r2FreeInstance(s593r2Instance* instance);

#endif /* s593r2_H */

