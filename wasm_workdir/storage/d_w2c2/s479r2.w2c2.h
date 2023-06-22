#ifndef s479r2_H
#define s479r2_H

#include "w2c2_base.h"

typedef struct s479r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s479r2Instance;

void f0(s479r2Instance*);

void f1(s479r2Instance*);

U32 f2(s479r2Instance*);

void f3(s479r2Instance*,U32);

U32 f4(s479r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s479r2Instance*,U32,U32,U32,U32,U32);

void f6(s479r2Instance*,U32);

void f7(s479r2Instance*,U32,U32,U32);

void f8(s479r2Instance*,U32,U32,U32);

void s479r2____wasm_call_ctors(s479r2Instance*i);

void s479r2____wasm_apply_data_relocs(s479r2Instance*i);

U32 s479r2_func_1(s479r2Instance*i);

void s479r2_call_cb(s479r2Instance*i,U32 l0);

void s479r2Instantiate(s479r2Instance* instance, void* resolve(const char* module, const char* name));

void s479r2FreeInstance(s479r2Instance* instance);

#endif /* s479r2_H */

